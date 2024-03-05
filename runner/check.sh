# 一時ファイル
output=check_output.txt
correct=check_correct.txt

# コンパイル・実行
echo "入力例: "
make run > $output

# 出力例を取得
line_cnt=$(wc -l < $output)
echo "出力例: "
for((i=1; i<=$line_cnt; i++)); do
    read -p "" input_line
    echo $input_line >> $correct
done

# 判定
if diff $output $correct; then
    echo "判定: OK"
else
    echo "判定: NG"
fi

# 一時ファイル削除
rm $output
rm $correct