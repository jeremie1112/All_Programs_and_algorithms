(ns my-prog.main
  (:gen-class))

(defn merge-sort
      "Sorting the given collection with merge-sort"
      [coll]
      (if (or (empty? coll)
              (= 1 (count coll)))
        coll
        (let [[l1 l2] (split-at (/ (count coll) 2) coll)]
             ;recursive call
             (loop [r [] l1 (merge-sort l1) l2 (merge-sort l2)]
                   ;merging
                   (cond (empty? l1) (into r l2) ;when l1 is exhausted
                         (empty? l2) (into r l1) ;when l2 is exhausted
                         :else (if (> 0 (compare (first l1) (first l2))) ;comparison
                                 (recur (conj r (first l1)) (rest l1) l2)
                                 (recur (conj r (first l2)) l1 (rest l2))))))))

(defn -main [& args]
      (let [some_list (shuffle (take 50 (range)))]
           (println "Let's merge sort the input of: " some_list)
           (println (merge-sort some_list))))
