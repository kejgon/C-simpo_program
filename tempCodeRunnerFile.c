//////////////////? DMA ?//////////////
struct Emp
{
    int emp_No;
    char emp_Name[20];
    double emp_Salary;
};

void main()
{
    struct Emp *ptr;
    ptr = (struct Emp *)malloc(sizeof(struct Emp));

    if (ptr == NULL)
    {
        printf("Out of Memory error.\n");
    }
    else
    {
        printf("Enter Employee's Details :\n");
        scanf("%d\n%s\n%d", &ptr->emp_No, ptr->emp_Name, &ptr->emp_Salary);
    }
    printf("EMP_NO : %d\nEMP_NAME : %s\nEMP_SALARY : %d", ptr->emp_No, ptr->emp_Name, ptr->emp_Salary);
}