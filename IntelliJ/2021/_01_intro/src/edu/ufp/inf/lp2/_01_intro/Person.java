package edu.ufp.inf.lp2._01_intro;

import sun.text.UCompactIntArray;

import java.lang.String;

public class Person {

  private String idNumber;

  private String name;

  private String adress;

  private Date birth;

  public Person(String idNumber, String name, String adress, Date birth) {
    this.idNumber = idNumber;
    this.name = name;
    this.adress = adress;
    this.birth = birth;
  }

  public Person(){

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

  public int age() {
    return this.birth.differenceYears(new Date(System.currentTimeMillis()));
  }


  public boolean olderThan(Person p){
    return !this.birth.afterDate(p.birth);

  }

  @Override
  public String toString() {
    return "Person{" + "idNumber='" + idNumber + '\'' + ", name='" + name + '\'' + ", adress='" + adress + '\'' + ", birth=" + birth + '}';
  }

  public static void main(String[] args) {
    Person teste = new Person();
    teste.idNumber ="1";
    teste.adress = "Teste";
    teste.birth = new Date();
  }
}