-- Program 3: Prace s ěretzci a vestavenymi funkcemi 0
require "ifj21"
function main()
    local s1 : string = "Toto je nejaky text"
    local s2 : string = s1 .. ", ktery jeste trochu obohatime"
    print(s1, "\010", s2)local s1len:integer=#s1
    s1len = s1len - 4 s1 = substr(s2, s1len, s1len + 4) s1len = s1len + 1
    write("4 znaky od", s1len, ". znaku v \"", s2, "\":", s1, "\n")
    write("Zadejte serazenou posloupnost vsem malych pismen a-h, ")
    write("pricemz se pismena nesmeji v posloupnosti opakovat: ")
    s1 = reads()
    if s1 ~= nil then
        while s1 ~= "abcdefgh" do
            write("\n", "Spatne zadana posloupnost, zkuste znovu:")
            s1 = reads()
        end
    else

    end
end
main()
