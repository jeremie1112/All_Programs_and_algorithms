(ns my-prog.main
  (:gen-class))

(defn- bubble
  ([xs] (bubble xs [] false))
  ([[x y & xs] ys changed]
   (if (nil? y)
     [(conj ys x) changed]
     (if (> x y)
       (recur (cons x xs) (conj ys y) true)
       (recur (cons y xs) (conj ys x) changed)))))

(defn bubble-sort [xs]
  (loop [[ys changed] (bubble xs)]
    (if changed
      (recur (bubble ys))
      ys)))

(defn -main [& args]
  (println "Let's sort the input of [3 2 4 1]: " (bubble-sort [3 2 4 1])))
