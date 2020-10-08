package edu.ufp.inf.lp2._1_intro;


public class Person {

  private String idNumber;

  private String name;

  private String adress;

    private Date birth;

  @Override
  public String toString() {
    return "Person{" +
            "idNumber='" + idNumber + '\'' +
            ", name='" + name + '\'' +
            ", adress='" + adress + '\'' +
            ", birth=" + birth + '\'' +
            ", age='"+ age() + "}" +
            '}';
  }

  public Person(String idNumber, String name, String adress, Date birth) {
    this.setIdNumber(idNumber);
    this.setName(name);
    this.setAdress(adress);
    this.setBirth(birth);
  }

  public int age() {
  Date d = new Date();
  int age = d.differenceYears(this.birth);  //OU   return this.birth.differenceYears(d);
    Date dbirth = new Date( this.birth.getDay(), this.birth.getMonth(),d.getYear());
    if (d.beforeDate(dbirth)) age--;
    return age;
  }

  boolean olderThan(Person p) {
  return false;
  }

  public String getIdNumber() {
    return idNumber;
  }

  public void setIdNumber(String idNumber) {
    this.idNumber = idNumber;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public String getAdress() {
    return adress;
  }

  public void setAdress(String adress) {
    this.adress = adress;
  }

  public Date getBirth() {
    return birth;
  }

  public void setBirth(Date birth) {
    this.birth = birth;
  }
}