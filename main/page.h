//
// Created by vaca on 4/11/22.
//

#ifndef HTTP_SERVER1_PAGE_H
#define HTTP_SERVER1_PAGE_H

#define PageX "\
<!doctype html>\
<html>\
<head>\
<meta charset='utf-8'>\
<meta content='width=device-width,initial-scale=1' name='viewport'>\
<title>ESP32 OV2460</title>\
<style>\
body {\
font-family: Arial, Helvetica, sans-serif;\
background: #ffffff;\
color: #000000;\
font-size: 16px\
}\
h2 {\
font-size: 18px\
}\
section.main {\
margin-top: 30px;\
justify-content: center;\
display: flex\
}\
.n1 {\
height: 25px;\
}\
.n5 {\
height: 100px;\
}\
.save {\
margin-top: 50px;\
margin-right: 50px;\
height: 60px;\
width: 120px;\
font-size: large;\
}\
td {\
width: 130px;\
padding: 5px;\
horiz-align: left\
}\
.spacer {\
height: 20px;\
}\
tr {\
text-align: right\
}\
</style>\
</head>\
<body>\
<section class='main'>\
<div id='content'>\
<script>\
if (window.location.search.substr(1) !== '') {\
document.getElementById('content').display = 'none';\
document.body.innerHTML = '<h1>ESP32串口透传配置</h1>设置成功， 请等待...';\
setTimeout('location.href = '/'', 10000);\
}\
</script>\
<form action='' method='get'>\
<table>\
<tr>\
<td>WiFi名称</td>\
<td><input class='n1' id='wifi_name' name='ap_ssid' type='text' value=''/></td>\
</tr>\
<tr>\
<td>WiFi密码</td>\
<td><input class='n1' id='wifi_password' name='ap_password' type='text' value=''/></td>\
</tr>\
<tr class='n5'>\
<td>蓝牙名称</td>\
<td><input class='n1' id='ble_name' name='ble_name' type='text' value=''/></td>\
</tr>\
<tr>\
<td></td>\
<td>\
<div style='float:left;'><input checked='checked' id='n3' id='is_connect_router'\
name='is_connect_router'\
type='checkbox'></div>\
<div style='float:left;'>是否连接路由器</div>\
</td>\
</tr>\
<tr>\
<td>路由器名称</td>\
<td><input class='n1' id='router_name' name='router_name' type='text' value=''/></td>\
</tr>\
<tr>\
<td>路由器密码</td>\
<td><input class='n1' id='router_password' name='router_password' type='text' value=''/></td>\
</tr>\
<tr>\
<td>内网IP</td>\
<td><input class='n1' id='inner_ip' name='inner_ip' type='text' value=''/></td>\
</tr>\
<tr class='spacer'></tr>\
<tr>\
<td>TCP Server 端口</td>\
<td><input class='n1' id='tcp_port' name='tcp_port' type='text' value=''/></td>\
</tr>\
<tr>\
<td>UDP Server 端口</td>\
<td><input class='n1' id='udp_port' name='udp_port' type='text' value=''/></td>\
</tr>\
<tr class='spacer'></tr>\
<tr>\
<td>串口波特率</td>\
<td>\
<select class='n2' class='default-action' id='bau' name='bau'>\
<option value='1'>9600</option>\
<option value='2'>19200</option>\
<option value='3'>38400</option>\
<option value='4'>115200</option>\
<option value='5'>2000000</option>\
</select>\
</td>\
</tr>\
<tr>\
<td></td>\
<td>\
<div style='float:left;'><input class='save' id='save' type='submit' value='保存'/></div>\
</td>\
</tr>\
</table>\
</form>\
</div>\
</section>\
</body>\
</html>\
"
#define CONFIG_PAGE "\
<html>\
<head></head>\
<meta name='viewport' content='width=device-width, initial-scale=1'>\
<body>\
<h1>ESP32 NAT Router Config</h1>\
<div id='config'>\
<script>\
if (window.location.search.substr(1) != '')\
{\
document.getElementById('config').display = 'none';\
document.body.innerHTML ='<h1>ESP32 NAT Router Config</h1>The new settings have been sent to the device...';\
setTimeout(\'location.href = '/'\',10000);\
}\
</script>\
<h2>AP Settings</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>SSID:</td>\
<td><input type='text' name='ap_ssid' value='%s'/></td>\
</tr>\
<tr>\
<td>Password:</td>\
<td><input type='text' name='ap_password' value='%s'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Set' /></td>\
</tr>\
</table>\
<small>\
<i>Password: </i>less than 8 chars = open<br />\
</small>\
</form>\
\
<h2>STA Settings</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>SSID:</td>\
<td><input type='text' name='ssid' value='%s'/></td>\
</tr>\
<tr>\
<td>Password:</td>\
<td><input type='text' name='password' value='%s'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Connect'/></td>\
</tr>\
\
</table>\
</form>\
\
<h2>STA Static IP Settings</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>Static IP:</td>\
<td><input type='text' name='staticip' value='%s'/></td>\
</tr>\
<tr>\
<td>Subnet Mask:</td>\
<td><input type='text' name='subnetmask' value='%s'/></td>\
</tr>\
<tr>\
<td>Gateway:</td>\
<td><input type='text' name='gateway' value='%s'/></td>\
</tr>\
<tr>\
<td></td>\
<td><input type='submit' value='Connect'/></td>\
</tr>\
\
</table>\
<small>\
<i>Leave it in blank if you want station get IP by DHCP.</i>\
</small>\
</form>\
\
<h2>Device Management</h2>\
<form action='' method='GET'>\
<table>\
<tr>\
<td>Reset Device:</td>\
<td><input type='submit' name='reset' value='Restart'/></td>\
</tr>\
</table>\
</form>\
</div>\
</body>\
</html>\
"
#endif //HTTP_SERVER1_PAGE_H
