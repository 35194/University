import edu.ufp.inf.lp2.course.version1.float;
import edu.ufp.inf.lp2.course.version1.Date;
import edu.ufp.inf.lp2.course.version1.ArrayList<Discipline>;
import edu.ufp.inf.lp2.course.version1.Discipline;
import java.util.Vector;
import edu.ufp.inf.lp2.course.version1.long;
import edu.ufp.inf.lp2.course.version1.CourseClass;

public class Student {

  public long number;

  public Date registry;

  public CourseClass courseClass;

  public ArrayList<Discipline> disciplinas;

    /**
   * 
   * @element-type Discipline
   */
  public Vector  disciplinas;
    public CourseClass courseClass;

  public void registerInDisciplpine(Discipline d) {
  }

  public void unregisterFromDiscipline(String M) {
  }

  public void setStudentGrade(String dis, float g) {
  }

  public ArrayList<Discipline> doneDisciplines() {
  return null;
  }

}