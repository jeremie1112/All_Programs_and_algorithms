<?php

function binarySearch($arr, $value) { 
   $low = 0;
   $high = count($arr) - 1;
 
   while($low <= $high) {  
      $mid = ($low + $high)/2;
      
      if ($value == $arr[$mid]) { 
         return $mid;
      }elseif($value < $arr[$mid]) {               
         $high = $mid - 1;
      }elseif($value > $arr[$mid+1]) {        
         $low = $mid + 1;
      }
   }
   return -1; 
}
 
$arr    = array(1, 3, 5, 6, 7, 8, 9);
$value  = 6;

$index = binarySearch($arr, $value);
 
if($index == -1){
   echo "search key is not found";
}else{ 
   echo "search element is found at index ".$index;
}