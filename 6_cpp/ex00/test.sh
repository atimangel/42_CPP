#! /bin/zsh
typeset -a array
array=('' 'a' '{' '999' '0' '0.0' '0.0f' '1' '1.1' '1.000001' '1.1f' '1.1l' '1.f' '1.'
	'-42' '-4.2' '-4.2f' 'nan' 'NAN' 'Nan' '-nan' '+nan' 'nanf' 'Nanf' '-nanf'
'inf' '-inf' 'inff' '-inff' '+inf' '+inff' 'INF' 'Inf' 'Inff')
	
for i in $array
do
	echo ./Convert $i
	./Convert $i
	echo
done
