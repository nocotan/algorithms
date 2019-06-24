#!/usr/bin/awk -f
{
gsub(",", " ", $0);
print($0);
}
