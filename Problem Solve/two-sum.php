<?php

function twoSum($nums, $target) {

    $arrayPosition = [];
    $arraySize = count($nums);

    for($i = 0; $i < $arraySize-1; $i++)
    {
        for($j = $i; $j < $arraySize-1; $j++)
        {
            if( ( $nums[$i] + $nums[$j+1] ) == $target )
            {
                    array_push($arrayPosition, $i);
                    array_push($arrayPosition, $j+1);
                    return $arrayPosition ;
            }
        }   
    }        
}

$nums = [2,7,11,15];
$target = 9;
print_r( twoSum($nums, $target) );


class Solution {

function twoSum($nums, $target) {

    $arrayPosition = [];
    $arraySize = count($nums);

    for($i = 0; $i < $arraySize-1; $i++)
    {
        for($j = $i; $j < $arraySize-1; $j++)
        {
            if( ( $nums[$i] + $nums[$j+1] ) == $target )
            {
                    array_push($arrayPosition, $i);
                    array_push($arrayPosition, $j+1);
                    return $arrayPosition ;
            }
        }   
    }        
  }
}

?>