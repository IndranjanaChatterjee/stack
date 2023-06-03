import java.util.*;
public class problem2
{
    String name[];
    int point,max;

    problem2(int cap)
    {
        point=-1;
        max=cap;
        name=new String[max];
    }

    void add(String v)
    {
        if(point==(max-1))
        {
            System.out.println("Shelf full");
        }
        else
        {
            ++point;

        
            name[point]=v;
        }
    }

    String tell()
    {
        if(point==-1)
        {
            System.out.println("Shelf is empty");
            return ("");
        }
        else
        {
            String s;
            s=name[point];
            --point;
            return(s);
        }
    }

    void display()
    {
        if(point!=-1)
        {
            int i;
            for(i=0;i<=point;i++)
            {
                System.out.println(name[i]);
            }
        }
    }
}