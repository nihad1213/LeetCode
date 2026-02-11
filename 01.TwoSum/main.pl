use Data::Dumper;

sub twoSum {
    my ($nums, $target) = @_;
    
    for (my $i = 0; $i < scalar(@$nums); $i++) {
        for (my $j = $i + 1; $j < scalar(@$nums); $j++) {
            if ($nums->[$i] + $nums->[$j] == $target) {
                return [$i, $j];
            }
        }
    }
}

print Dumper(twoSum([2, 7, 11, 15], 9));
print Dumper(twoSum([3, 2, 4], 6));
print Dumper(twoSum([3, 3], 6));
