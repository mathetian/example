import TopCoder
import System.Environment (getArgs)
import System.IO
import FoxAndGo2

getVars :: Parser ([String])
getVars = do board <- spaces >> (parseList parseString)
             return (board) 

main = do 
    args <- getArgs
    hIn <- openFile (head args) ReadMode
    contents <- hGetContents hIn
    case (parse getVars "variables" contents) of
        Left err -> print err
        Right (board) -> do
            hOut <- openFile (head (tail args)) WriteMode
            hPutStr hOut $ show $ maxKill board
            hClose hOut
    hClose hIn
