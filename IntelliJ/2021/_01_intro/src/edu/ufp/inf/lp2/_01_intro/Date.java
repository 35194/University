package edu.ufp.inf.lp2._01_intro;

public class Date {

  private short day;

  private short month;

  private int year;

  public Date(int day, int month, int year) {
    this.day = day;
    this.month = month;
    this.year = year;
  }
  public Date() {
    this.day = 1;
    this.month = 1;
    this.year = 2021;
  }

  public Date(long currentTimeMillis) {
  }

  public int getDay() {
    return day;
  }

  public void setDay(int day) {
    this.day = day;
  }

  public int getMonth() {
    return month;
  }

  public void setMonth(int month) {
    this.month = month;
  }

  public int getYear() {
    return year;
  }

  public void setYear(int year) {
    this.year = year;
  }

  public boolean beforeDate(Date d) {

    return this.compareTo(d) < 0;
  }

  public boolean afterDate(Date d) {

    return this.compareTo(d) > 0;
  }

  public static boolean isLeapYear(int year) {
    return ((year%400 == 0) || (year%4== 0 && year %100 != 0));
  }

  public void incrementDate() {
    if (this.month == 12 && (this.day == daysMonth((short) this.month, this.year))){
      this.day = 1;
      this.month = 1;
      this.year++;
    } else if (this.day < Date.daysMonth((short) this.month, this.year)){
      this.day++;
    } else {
      this.day = 1;
      this.month++;
    }

  }
//ToDo: This doesn't work.
  /*
  public int differenceYears(Date d) {
  return  differenceMonths(d) / 12;
  }

  public int differenceMonths(Date d) {
  return 0;
  }
    return monthsCrawler(d);

  public static int monthsCrawler(Date begin, Date end) {
      int year = begin.year, monthsCount = 0;
      System.out.println("Date - monthsCrawler(): begin = " + begin.toString() + " <-> end = " + end.toString());
      while (year < end.year){
        monthsCount += (begin.month < end.month ? 12
                : Date.monthsBetweenMonths((short)) begin.day, begin.month, (short) 31, (short 12), year));
        year++;
      }
      if(begin.year == end.year){
          monthsCount += Date.monthsBetweenMonths(begin.day, begin.month, end.day, end.month, year);
      } else if (begin.month <= end.month){
        monthsCount += Date.monthsBetweenMonths((short) 1, (short) 1, end.day, end.month, end.year);
      }
      return monthsCount;
  }
*/

  /**
   * @param beginDay
   * @param beginMonth
   * @param endDay
   * @param endMonth
   * @param year
   * @return the number of months between two dates of a given year
   */
  public static int monthsBetweenMonths(short beginDay, short beginMonth, short endDay, short endMonth, int year) {
    short month = beginMonth, monthsCount = 0;
    while ((month < endMonth) && (beginDay <= endDay)) {
      monthsCount++;
      month++;
    }
    if (month == endMonth && ((endDay - beginDay + 1) == Date.daysMonth(month, year))) {
      monthsCount++;
    }
    return monthsCount;
  }




  public static int daysMonth(short month, int year) {

    switch(month){
      case 11:
      case 4:
      case 6:
      case 9:
        return 30;
      case 2:
        return (isLeapYear(year) ? 29 : 28);
      default:
        return 31;
    }
  }

  @Override
  public String toString() {
    return "Date{" + "day=" + day + ", month=" + month + ", year=" + year +'}'; }

  public int compareTo (Date d) {
    if (this.year == d. year && this.month == d.month && this.day == d.day) {
      return 0;
    } else
      if(this.year == d.year) {
             if(this.month == d.month) {
               return (this.day - d.day) / Math.abs(this.day - d.day);
             } else {
               return (this.month - d.month) / Math.abs(this.month - d.month);
             }

      } else {
          return(this.year - d.year) / Math.abs(this.year - d.year);
      }
  }


  public static void main(String[] args) {
    Date teste = new Date();
    teste.day = 1;
    teste.month = 1;
    teste.year = 2021;
    System.out.println("Teste dos valores do objeto: Dia:" + teste.day + "-Mes:" + teste.month + "-Ano:" + teste.year);
  }
}