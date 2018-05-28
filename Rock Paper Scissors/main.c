/*
Copyright 2014 Hermann Krumrey <hermann@krumreyh.com>

This file is part of rock-paper-scissors.

rock-paper-scissors is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

rock-paper-scissors is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with rock-paper-scissors.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main(){
    printf("Welcome to Rock Paper Scissors!\n\n");                                                      //Introduction

    int wloop1 = 0;                                                                                     //loop initiator 1
    while(wloop1==0){                                                                                   //while loop 1

        int wloop2 = 0;                                                                                 //loop initiator 2
        while(wloop2==0){                                                                               //while loop 2

            printf("Do you choose ROCK, PAPER, or SCISSORS?\n");                                        //print user prompt
            char user[256];                                                                             //define user variable
            scanf("%s", user);                                                                          //scan keyboard for user input
            //printf("%s", user);                                                                       //check userinput
            int i = 0;                                                                                  //initiate toupper loop
            while(user[i]){                                                                             //beginn toupper loop, end when at end of user-string
                user[i] = toupper(user[i]);                                                             //toupper function
                i++;                                                                                    //increment i
            }
            //printf("%s", user);                                                                       //check userinput again
            if(strncmp(user,"ROCK",4)==0||strncmp(user,"PAPER",5)==0||strncmp(user,"SCISSORS",4)==0){   //check if input is valid
                printf("\nInput is %s\n", user);                                                        //Input analysis
                wloop2 = 1;                                                                             //loop 2 ender
            }
            else{                                                                                       //condition to continue loop 2
                printf("\nInput faulty\n");                                                             //output error message and continue loop 2
            }
        }

        srand(time(0));                                                                              //create random seed
        int random = rand() % 99 + 1;                                                                   //initiate random number between 1 and 100

        char comp[255];                                                                                   //Initiate PC choice variable
        if(random<34){                                                                                  //creation of random PC input
            comp[255] = "ROCK";
        }
        else{if(random<67){
                comp[255] = "PAPER";
            }
            else{
                comp[255] = "SCISSORS";
            }
        }

        printf("PC %s", comp);                                                                    //check PC input



        wloop1 = 0;                                                                                     //loop 1 ender
    }
}
