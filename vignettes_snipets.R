library(mrgsolve)

# Load Model
mod <- modlib("pred1")
mod

# Generate Data
library(dplyr)
data <- data_frame(ID = 1, B = exp(rnorm(100, 0,2)))
head(data)
length(data)
ncol(data)
nrow(data)


#
out <- mrgsim_d(mod,data,carry.out="B")
plot(out, Y~B)

library(purrr)
set.seed(223)
df <- map_df(1:30, function(i) data_frame(ID = i, B = seq(0,30,1)))
head(df)
nrow


mod %>% 
  data_set(df) %>% 
  mrgsim(carry.out="B") %>%
  plot(Y ~ B)
