(ns my-prog.main
  (:gen-class))

;; Using collection filtering to split the input based on the selected pivo
(defn quick-sort [[pivot & coll]]
      (when pivot
            (concat (quick-sort (filter #(< % pivot) coll))
                    [pivot]
                    (quick-sort (filter #(>= % pivot) coll)))))

(defn -main [& args]
    (let [some_list (shuffle (take 50 (range)))]
        (println "Let's sort the input of: " some_list)
        (println (quick-sort some_list))))
