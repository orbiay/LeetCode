# Write your MySQL query statement below
SELECT Email FROM ( SELECT Email , COUNT(id) AS count FROM Person GROUP BY email) AS email_counts
WHERE count > 1