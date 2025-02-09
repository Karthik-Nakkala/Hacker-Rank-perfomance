#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int path,action,treasure_chest;
    scanf("%d",&path);
    if(path>=1 && path<=3){
        if(path==1){
            printf("Player chooses the Left path.\n");
            int action;
            scanf("%d",&action);
            if(action==1 || action==2){
               if(action==1){
                   printf("Poor choice, Game Over!\n");
               } 
                else if(action==2){
                    printf("Player found a bridge.\n");
                    int option;
                    scanf("%d",&option);
                    if(option==1){
                       printf("Player crosses the bridge safely.\n");
                        scanf("%d",&treasure_chest);
                        if(treasure_chest==1){
                            printf("All that glitters is not gold, Game Over!\n");
                        }
                        else if(treasure_chest==2){
                            printf("All your efforts were for nothing, Game Over!\n");
                        }
                        else if(treasure_chest==3){
                            printf("Congratulations!! You won the treasure.\n");
                        }
                    }
                    else if(option==2){
                        printf("Poor luck, Game Over!\n");
                    }
                }
            }
            
                
            
        }
        else if(path==2){
             printf("Player chooses the Middle path.\n");
            int puzzle;
            scanf("%d",&puzzle);
            if(puzzle==582){
                printf("Player solved the puzzle.\n");
                 scanf("%d",&treasure_chest);
                        if(treasure_chest==1){
                            printf("All that glitters is not gold, Game Over!\n");
                        }
                        else if(treasure_chest==2){
                            printf("All your efforts were for nothing, Game Over!\n");
                        }
                        else if(treasure_chest==3){
                            printf("Congratulations!! You won the treasure.\n");
                        }
            }
            else if(puzzle!=582){
                printf("Foolish player, Game Over!\n");
            }
        }
        else if(path==3){
             printf("Player chooses the Right path.\n");
            int correct_sequence;
            scanf("%d",&correct_sequence);
            if(correct_sequence==30){
                printf("Player solved the puzzle.\n");
                scanf("%d",&treasure_chest);
                        if(treasure_chest==1){
                            printf("All that glitters is not gold, Game Over!\n");
                        }
                        else if(treasure_chest==2){
                            printf("All your efforts were for nothing, Game Over!\n");
                        }
                        else if(treasure_chest==3){
                            printf("Congratulations!! You won the treasure.\n");
                        }
            }
            else if(correct_sequence!=30){
                printf("Foolish player, Game Over!\n");
            }
        }
        
    }
    return 0;
}