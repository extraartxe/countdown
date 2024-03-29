<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Countdown</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            text-align: center;
            margin: 50px;
        }

        #countdown {
            font-size: 2em;
            font-weight: bold;
            color: #333;
        }
    </style>
</head>
<body>
    <h1>2024年10月27日までのカウントダウン</h1>
    <div id="countdown"></div>

    <script>
        // ターゲット日時の設定
        var targetDate = new Date("2024-10-27T00:00:00Z").getTime();

        // カウントダウンの更新
        function updateCountdown() {
            var currentDate = new Date().getTime();
            var timeRemaining = targetDate - currentDate;

            var seconds = Math.floor(timeRemaining / 1000);

            document.getElementById("countdown").innerHTML = seconds + " 秒";
        }

        // 1秒ごとにカウントダウンを更新
        setInterval(updateCountdown, 1000);

        // 初回表示
        updateCountdown();
    </script>
</body>
</html>
