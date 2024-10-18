impl Solution {
    pub fn largest_triangle_area(points: Vec<Vec<i32>>) -> f64 {
        fn distance(p1: &Vec<i32>, p2: &Vec<i32>) -> f64 {
            (((p1[0] - p2[0]).abs().pow(2) + (p1[1] - p2[1]).abs().pow(2)) as f64).sqrt()
        };

        let mut largest_area = 0.0;
        let l = points.len();
        for i in 0..l {
            for j in i..l {
                for k in j..l {
                    let point_i = &points[i];
                    let point_j = &points[j];
                    let point_k = &points[k];
                    let a = distance(point_i, point_j);
                    let b = distance(point_i, point_k);
                    let c = distance(point_j, point_k);
                    if a + b > c && a + c > b && b + c > a {
                        let p = (a + b + c) / 2 as f64;
                        let area = (p * (p - a) * (p - b) * (p - c)).sqrt();
                        if area > largest_area {
                            largest_area = area;
                        }
                    }
                }
            }
        }
        largest_area
    }
}
