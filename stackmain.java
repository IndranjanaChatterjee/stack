import java.util.*;
public class stackmain
{
    int a[];
    int size;
    int top;
    stackmain(int n)
    {
        a=new int[n];
        size=n;
        top=-1;
    }

    int isEmpty(int f)
    {
        if(f==-1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int isFull(int l)
    {
        if(l==(size-1))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    void push(int num)
    {
        if(isFull(top)==0)
        {
            System.out.println("overflows");
        }
        else
        {
            top++;
            a[top]=num;
        }
    }

    int pop()
    {
        if(isEmpty(top)==0)
        {
            System.out.println("Underflows");
            return (-1);
        }
        else
        {
            int v;
            v=a[top];
            --top;
            return(v);

        }
    }

    void display()
    {
        if(isEmpty(top)!=0)
        {
            int i;
            for(i=0;i<=top;i++)
            {
                System.out.println(a[i]);
            }
        }
    }

    public static void main(String args[])
    {
        int n;
        Scanner in=new Scanner(System.in);
        System.out.println("enter the size");
        n=in.nextInt();
        stackmain ob=new stackmain(n);
        int c,add;
        do
        {
            System.out.println("enter 1 to push 2 to pop and 3 to display");
            c=in.nextInt();
            switch(c)
            {
                case 1:
                System.out.println("enter the element to add");
                add=in.nextInt();
                ob.push(add);
                break;
                case 2:
                int ele;
                ele=ob.pop();
                System.out.println("poped element "+ele);
                break;
                case 3:
                ob.display();
                break;
                default:
                System.out.println("enter correct choice");
            }
        }
        while(c==1||c==2||c==3);
    }
}