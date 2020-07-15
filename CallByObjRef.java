import java.io.*;
class Test
{
                int a, b;
                Test(int i, int j)
                {
                                a=i;
                                b=j;
                }
                void swap(Test ob)
                {
                                int c;
                                c=ob.a;
                                ob.a=ob.b;
                                ob.b=c;
                                System.out.println(“Inside swap method”);
                                System.out.println(“a = “+ob.a+” b = “+ob.b);
                }
}
class CallByObjRef
{
                public static void main(String[] args)
                {
                                Test ob = new Test(2,3);
                                System.out.println(“Before Swapping”);
                                System.out.println(“ob.a = “+ob.a+” ob.b = “+ob.b);
                                ob.swap(ob);
                                System.out.println(“After Swapping in main method”);
                                System.out.println(“ob.a = “+ob.a+” ob.b = “+ob.b);
                }
}
