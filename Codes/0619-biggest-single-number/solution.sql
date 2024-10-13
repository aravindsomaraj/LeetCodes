SELECT 
    CASE 
        WHEN EXISTS (
            SELECT num
            FROM MyNumbers
            GROUP BY num
            HAVING COUNT(num) = 1
        )
        THEN (
            SELECT num
            FROM MyNumbers
            GROUP BY num
            HAVING COUNT(num) = 1
            ORDER BY num DESC
            LIMIT 1
        )
        ELSE NULL
    END AS num;

