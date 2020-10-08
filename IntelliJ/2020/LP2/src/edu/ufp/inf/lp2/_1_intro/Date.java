package edu.ufp.inf.lp2._1_intro;

import java.util.Calendar;
import java.util.GregorianCalendar;

public class Date {

  private int day;

  private int month;

  public Date(int day, int month, int year) {
    this.day = day;
    this.month = month;
    this.year = year;
  }

  @Override
  public String toString() {
    return "Date{" +
            "day=" + day +
            ", month=" + month +
            ", year=" + year +
            '}';
  }

  public Date() {
    GregorianCalendar gregCalendar = new GregorianCalendar();
    this.day = gregCalendar.get(Calendar.DAY_OF_MONTH);
    this.month = gregCalendar.get(Calendar.MONTH)+1;
    this.year = gregCalendar.get(Calendar.YEAR);
  }

  private int year;

  public boolean beforeDate(Date d) {
  return compareTo(d) == -1; // OU return compareTo(d) == -1 ? true : false;

  }

  public boolean afterDate(Date d) {
    return compareTo(d) == 1;
  }

  public boolean isLeapYear() {
  return this.year % 4 == 0 && (this.year % 400 == 0 || this.year %100 != 0);
  }

  public void incrementDate() {
  }

  public int differenceYears(Date d) {
    return Math.abs(this.year - d.year);
  }

  public int differenceMonths(Date d) {
    return 0;
  }

  public int compareTo(Date d) {
  if (this.day == d.day && this.month == d.month && this.year == d.year)
    return 0;
  if (this.year == d.year) {
    if (this.month == d.month)
      return this.day < d.day ? -1: 1; //? = "então" Operador ternário
    else return this.month < d.month ? -1:1;
  }
  return this.year < d.year ? -1:1;
  }

  public int daysMonth() {

    switch (this.month) {
      case 1:
      case 3:
      case 5:
      case 8:
      case 10:
      case 12: return 31;
      case 2: return isLeapYear() ? 29:28;
      default: return 30;
    }
  }
  public static int daysMonth(int month, int year) {
    Date d = new Date(1,month,year);
    return d.daysMonth();
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

  public static int daysCrawlerRecursive (Date begin, Date end) {
     int diffDays = 0;
     Date auxBegin = new Date (begin.day, begin.month, begin.year);
     diffDays =  daysCrawlerRecursiveAux(auxBegin, end);
     return diffDays;
  }
  private static int daysCrawlerRecursiveAux(Date begin, Date end) {
    if (begin. beforeDate(end)) {
      begin.incrementDate();
      return 1 + Date.daysCrawlerRecursiveAux(begin, end);
    }
    return 0;
  }

}