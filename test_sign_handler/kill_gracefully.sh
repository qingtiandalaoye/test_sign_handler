#!/bin/sh
ps -ef|grep -v grep|grep 'test_sign_handler'|while read u p o
do
  kill  $p
  sleep 3s
  kill -9 $p
  echo  kill test_sign_handler pid:$p at time: `date "+%Y-%m-%d %H:%M:%S"` >> ./output.txt
done 


