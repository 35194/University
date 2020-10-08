package edu.ufp.inf.lp2._1_intro;

public class Rectangle {
    private Point UpLeftPoint;
    private Point DownRightPoint;
    public Rectangle (Point UpLeftPoint, Point DownRightPoint) {
        this.UpLeftPoint = UpLeftPoint;
        this.DownRightPoint = DownRightPoint;
    }
    public float area() {
        return UpLeftPoint.distanceX(DownRightPoint) * UpLeftPoint.distanceY(DownRightPoint);
    }
    public float perimeter(){
        return UpLeftPoint.distanceX(DownRightPoint) * 2 + UpLeftPoint.distanceY(DownRightPoint) * 2;
    }
    public boolean isPointInside(Point p) {
        return  p.getX() >= this.UpLeftPoint.getX() &&
                p.getX() <= this.DownRightPoint.getX() &&
                p.getY() >= this.UpLeftPoint.getY() &&
                p.getY() <= this.DownRightPoint.getY();

    }
}

