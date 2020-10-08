package edu.ufp.inf.lp2._0_videoclub;

import java.util.ArrayList;
import java.util.Vector;

public class Movie {

  public String title;

  public int year;

  public double duration;

    public Vector  my;
    /**
   * 
   * @element-type Actor
   */
  public Vector  actors;
    /**
   * 
   * @element-type Genre
   */
  public Vector  genres;

  public void addGenre(Genre g) {
  }

  public Genre deleteGenre(String code) {
  return null;
  }

  public ArrayList<Genre> listGenres() {
  return null;
  }

  public void addACtor(Actor a) {
  }

  public Actor deleteActor(String name) {
  return null;
  }

  public ArrayList<Actor> listActors() {
  return null;
  }

}