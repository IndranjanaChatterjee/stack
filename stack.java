import java.util.*;
public class stack
{
    int a[];
    int top=-1;
    int capacity=5;
    stack(int num)
    {
        a=new int[num];
    }
    int isFull(int top)
    {
        if(top==a.length-1)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    int isEmpty(int top)
    {
        if(top==-1)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    void push(int n)
    {
        if(isFull(top)==1)
        {
            System.out.println("stack is full");
        }
        else 
        {
            ++top;
            a[top]=n;
        }
    }
    int pop()
    {
        int v=-1;
        if(isEmpty(top)==1)
        {
            System.out.println("stack is full");
        }
        else
        {
            
            v=a[top];
            --top;
        }
        return (v);
    }
    void display()
    {
        int i;
        if(isEmpty(top)!=1)
        {
          for(i=0;i<=top;i++)
          {
            System.out.println(a[i]);
          }
        }
        
        
    }
    public static void main(String args[])
    {
        
        int nn,number;
        Scanner in=new Scanner(System.in);
        System.out.println("enter the size");
        nn=in.nextInt();
        stack ob=new stack(nn);
        int k;
        System.out.println("enter 1 to push and 2 to pop");
        k=in.nextInt();
        while(k==1 || k==2)
        {
            if(k==1)
            {
                System.out.println("enter the number u want to push");
                number=in.nextInt();
                ob.push(number);
            }
            else
            {
                System.out.println(ob.pop());
            }
            System.out.println("enter 1 to push and 2 to pop");
            k=in.nextInt();
            
        }
        ob.display();
        
        
        
    }
    
}
