(setf a (read))
(setf b (read))
(princ (+ (* a b) (if (> a b) a b)))
(princ #\Newline)
