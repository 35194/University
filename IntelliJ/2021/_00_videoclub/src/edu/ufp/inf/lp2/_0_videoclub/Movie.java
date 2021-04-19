package edu.ufp.inf.lp2._0_videoclub;

import java.util.ArrayList;
import java.util.Vector;
import java.lang.String;

public class Movie {

  public String title;

  public int year;

    /**
   * 
   * @element-type Actor
   */
  public Vector  actors;

  public Movie(String title, int year) {
    this.title = title;
    this.year = year;
  }



  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public int getYear() {
    return year;
  }

  public void setYear(int year) {
    this.year = year;
  }

  /**
   * 
   * @element-type Genre
   */
  public ArrayList<Genre>  genres;

  public Genre addGenre(Genre g) {
  return null;
  }

  public Genre deleteGenre(Genre g) {
  return null;
  }

  public ArrayList<Genre> listGenres() {
  return null;
  }

  public Actor addActor(Actor a) {
  return null;
  }

  public Actor deleteActor(Actor a) {
  return null;
  }

  public ArrayList<Actor> listActors() {
  return null;
  }

  public static void main(String[] args) {

  }



}