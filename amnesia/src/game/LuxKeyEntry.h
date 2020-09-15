/*
 * Copyright © 2009-2020 Frictional Games
 * 
 * This file is part of Amnesia: The Dark Descent.
 * 
 * Amnesia: The Dark Descent is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version. 

 * Amnesia: The Dark Descent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Amnesia: The Dark Descent.  If not, see <https://www.gnu.org/licenses/>.
 */

// generated by Fast Light User Interface Designer (fluid) version 1.0110

#ifndef LuxKeyEntry_h
#define LuxKeyEntry_h
#include <FL/Fl.H>
#include "hpl.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include <FL/Fl_Input.H>

class Fl_Input_Key : public Fl_Input {
public:
  Fl_Input_Key(int X, int Y, int W, int H, const char *l = 0);
  int handle(int event);
private:
  int handle_key();
  int handle_paste();
  bool verifychar(char key);
};
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Return_Button.H>

class InstallKeyEntry {
  std::string &dest; 
  int &exitflag; 
public:
  InstallKeyEntry(std::string &key, int &exitpressed);
  Fl_Window *keyentrydialog;
  Fl_Input_Key *keyentry;
private:
  void cb_Exit_i(Fl_Button*, void*);
  static void cb_Exit(Fl_Button*, void*);
  void cb_Validate_i(Fl_Return_Button*, void*);
  static void cb_Validate(Fl_Return_Button*, void*);
public:
  void show(int argc, char*argv[]);
};
int Ask_Serial(std::string &serial);
#if TEST
int main(int argc, char *argv[]);
#endif
#endif