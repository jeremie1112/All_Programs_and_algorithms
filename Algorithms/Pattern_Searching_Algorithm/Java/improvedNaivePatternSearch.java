import java.util.*;
import java.io.*;
import java.lang.*;
  
class GFG { 
       
    static void patSearchinng(String txt,String pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);  ){
        int j;
        for(j=0;j<m;j++)
        if(pat.charAt(j)!=txt.charAt(i+j))
        break;
        
        if(j==m)
        System.out.print(i+" ");
        if(j==0){
        i++;}
        else{
        i=(i+j);}
    }
    }
  
    public static void main(String args[]) 
    {   String txt = "ABCABCD";String pat="ABCD";
        System.out.print("All index numbers where pattern found: ");
        patSearchinng(txt,pat);  
    } 
} 