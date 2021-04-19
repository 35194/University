package edu.ufp.inf.lp2._01_intro_tp;

public class Point {

  private float x;

  private float y;

  public Point(float x, float y) {
    this.setX(x);
    this.setY(y);
  }

  public Point() {

  }

  public void move(float dx, float dy) {
    this.x = this.x+dx;
    this.y = this.y+dy;
  }

  public void movex(float dx) {
    this.x = this.x+dx;
  }

  public void movey(float dy) {
    this.y = this.y+dy;
  }
  public float distX(Point p) {
   return this.x = this.x - p.x;
  }

  public float distY(Point p) {

    return this.y = this.y - p.y;
  }

  public float dist(Point p) {
    float dx = distX(p);
    float dy = distY(p);
    return (float) Math.sqrt(dx*dx + dy*dy);


  }

  public void printPoint() {
    System.out.println("Point @ [x = " + this.x + " , y = " +this.y + "]");
  }



  public float getX() {
    return x;
  }

  public void setX(float x) {
    this.x = x;
  }

  public float getY() {
    return y;
  }

  public void setY(float y) {
    this.y = y;
  }

  public static void main(String[] args) {
    Point p1 = new Point();
    System.out.println("p1 x = " + p1.getX() + "\tp1 y = " + p1.getY());
    Point p2 = new Point(2.0f, 0.0f);
    System.out.println("p2 x = " + p2.getX() + "\t p2 y = " + p2.getY());
    System.out.println("p1 dist x para p2 =" + p1.distX(p2));
    System.out.println("p2 dist x para p1 =" + p2.distX(p1));
    p2.move(-1.0F,1.0F);
    System.out.println("/------------------------------------\\\n"+"Moving p2 to the left on the x-array\n"+"/------------------------------------\\");
    System.out.println("p2 x = " + p2.getX() + "\t p2 y = " + p2.getY());
    System.out.println("p1 x = " + p1.getX() + "\tp1 y = " + p1.getY());
    System.out.println("p1 dist x para p2 =" + p1.distX(p2));
    System.out.println("p2 dist x para p1 =" + p2.distX(p1));
    System.out.println("p2 dist para p1 = " + p2.dist(p1));
    System.out.println("p1 dist para p2 = " + p1.dist(p2));
    p1.printPoint();
    p2.printPoint();
    System.out.println("/------------------------------------\\\n"+"Moving p1\n"+"/------------------------------------\\");
    p1.movex(1.0F);
    p1.movey(1.0F);
    System.out.println("p1 x = " + p1.getX() + "\tp1 y = " + p1.getY());
  }

}