package edu.ufp.inf.lp2._1_intro;

public class Point {


    private float x;
    private float y;

    public Point(float x, float y) {
        this.setX(x);
        this.setY(y);
    }

    public float distanceX(Point p) {
        return Math.abs(this.getX() - p.getX());
    }

    public float distanceY(Point p) {
        return Math.abs(this.getY() - p.getY());
    }

    public float distance(Point p) {
        return (float) Math.sqrt(Math.pow(distanceX(p), 2) + Math.pow(distanceY(p), 2));
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
}

