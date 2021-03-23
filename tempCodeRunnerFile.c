   for (i = 0; i < n; i++)
            {
                printf("Enter student %d MARKS.\n", i + 1);
                printf("Enter the number of units?\n");
                scanf("%d", &units);
                if (units >= 3 && units <= 7)
                {
                    for (int u = 0; u < units; u++)
                    {
                        printf("ENTER UNIT %d MARKS.\n", u + 1);
                        printf("Enter Unit name\n");
                        scanf("%s", unit_name[u]);
                        printf("Enter Unit Code.\n");
                        scanf("%s", unit_code[u]);
                        printf("Enter cat marks.\n");
                        scanf("%d", &cats[u]);
                        printf("Enter Project marks.\n");
                        scanf("%d", &project_marks[u]);
                        printf("Enter Attendance Marks.\n");
                        scanf("%d", &attendance_mark[u]);
                        printf("Enter Exam marks.\n");
                        scanf("%d", &exam_marks[u]);

                        total_marks[u] = cats[u] + project_marks[u] + attendance_mark[u] + exam_marks[u];
                        printf("Total Exam : %d\n", total_marks[u]);

                        for (int j = 0; j < u; j++)
                        {
                            if (total_marks[j] >= 70 && total_marks[j] <= 100)
                            {

                                grade[j] = 'A';
                                strcpy(remarks[j], "EXCELLENT");
                            }
                            else if (total_marks[j] >= 60 && total_marks[j] <= 69)
                            {

                                grade[j] = 'B';
                                strcpy(remarks[j], "VERY GOOD");
                            }
                            else if (total_marks[j] >= 50 && total_marks[j] <= 59)
                            {

                                grade[j] = 'C';
                                strcpy(remarks[j], "GOOD");
                            }
                            else if (total_marks[j] >= 40 && total_marks[j] <= 49)
                            {

                                grade[j] = 'D';
                                strcpy(remarks[j], "PASS");
                            }
                            else
                            {

                                grade[j] = 'F';
                                strcpy(remarks[j], "FAIL");
                            }
                        }

                        printf("Grade:  %c, and Remarks : %s\n", grade[u], remarks[u]);
                    }
                }
                else
                {
                    printf("You are only allowed to do Minimum of 3 & Maximum of 7 units.\n");
                }
            }