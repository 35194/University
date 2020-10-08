package edu.ufp.inf.lp2.course.version1;

import java.util.Vector;
import String;
import Student;

public class CourseClass {

  public String name;

  public ArrayLost<Student> students;

    /**
   * 
   * @element-type Student
   */
  public Vector  students;

  public void registerStudent(Student s) {
  }

  public STUDENT unregisterStudent(long n) {
  return null;
  }

  public STUDENT[] registeredStudents() {
  return null;
  }
  public void registerStudent (STUDENT s) {
    for (int i = 0; i < students.size(); i++) {
      Student sauss = students.get(i);
      if (sauss.getNumber() == s.getNumber[]){
        SOUT("Ja registado");
        return;
      }
    }
  }
}