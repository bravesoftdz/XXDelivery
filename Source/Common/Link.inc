//----------------------------------- 通用 -------------------------------------
{.$DEFINE DEBUG}
//调试模式

{.$DEFINE TrialVersion}
//试用版本

{$DEFINE UseReport}
//报表支持

{.$DEFINE RandomID}
//使用随机编号

{$DEFINE cxLibrary42}
//Ver4.2编译环境

{.$DEFINE EnableBackupDB}
//备用数据库支持
{.$DEFINE EnableDoubleDB}
//双数据库支持

//---------------------------------- 中间件 ------------------------------------
{.$DEFINE ClientMon}
//进程守护客户端

{$DEFINE HardMon}
//编译硬件守护

{.$DEFINE GenRODL}
//生成RODL资源

{$DEFINE COM_MIT}
//定义系统模式

//通用中间件
{$IFDEF COM_MIT}
  {$DEFINE DBPool}
  //启用数据库支持
  {.$DEFINE BusLog}
  //打印业务日志
  {$DEFINE ChannelPool}
  //启用通道支持
  {.$DEFINE AutoChannel}
  //启用通道平衡
  {.$DEFINE SAP}
  //启用SAP支持
  {.$DEFINE ClientMon}
  //支持守护服务
{$ENDIF}

//--------------------------------- 特定系统 -----------------------------------
{.$DEFINE COMMON}
//通用版本

{$DEFINE XXXX}
//特定系统

//安徽中材
{$IFDEF AHZC}
  {$DEFINE HYRFID201}
  //华益读头
  {$DEFINE AppAtTaskBar}
  //状态栏显示
  {.$DEFINE MITTruckProber}
  //车检由中间件控制
  {$DEFINE TruckProberEx}
  //车检判断Ex
  {$DEFINE MultiReplay}
  //计数器应答模式
  {.$DEFINE DaiStepWuCha}
  //包装阶梯误差
  {.$DEFINE DaiOpenBackWhenError}
  //包装错误抬后杆
  {$DEFINE BatchInHYOfBill}
  //批次保存在化验单字段
  {$DEFINE PrintHYEach}
  //随车开化验单
  {$DEFINE HeGeZhengOnly}
  //随车开单时只打合格证
  {$DEFINE HeGeZhengSimpleData}
  //使用简单合格证数据(无检验结果)
  {$DEFINE JSTruck}
  //格式化计数器车牌
  {$DEFINE SyncRemote}
  //远程同步
  {$DEFINE MicroMsg}
  //微信
  {$DEFINE GetTruckNoFromERP}
  //从ERP委托单获取车号
  {$DEFINE SyncDataByDataBase}
  //通过访问数据库进行数据交互
  {$DEFINE TruckOutTimeOut}
  //车辆出厂超时
{$ENDIF}

//新乡新星
{$IFDEF XXXX}
  {$DEFINE HYRFID201}
  //华益读头
  {$DEFINE AppAtTaskBar}
  //状态栏显示
  {$DEFINE MITTruckProber}
  //车检由中间件控制
  {.$DEFINE TruckProberEx}
  //车检判断Ex
  {$DEFINE MultiReplay}
  //计数器应答模式
  {.$DEFINE DaiStepWuCha}
  //包装阶梯误差
  {$DEFINE DaiStepDz}
  //包装阶梯袋重
  {$DEFINE OpenBackWhenError}
  //过磅异常抬后杆
  {$DEFINE BatchInHYOfBill}
  //批次保存在化验单字段
  {$DEFINE PrintHYEach}
  //随车开化验单
  {.$DEFINE HeGeZhengOnly}
  //随车开单时只打合格证
  {.$DEFINE HeGeZhengSimpleData}
  //使用简单合格证数据(无检验结果)
  {$DEFINE JSTruck}
  //格式化计数器车牌
  {$DEFINE SyncRemote}
  //远程同步
  {$DEFINE MicroMsg}
  //微信
  {$DEFINE GetTruckNoFromERP}
  //从ERP委托单获取车号
  {$DEFINE SyncDataByWSDL}
  //通过接口进行数据交互
  {$DEFINE AutoTruckIn}
  //车辆自动进厂
  {$DEFINE SaleOpenBackWhenError}
  //销售异常过磅抬后杆
  {$DEFINE AICMGetTruckTunnel}
  //自助机查询车辆通道
  {$DEFINE FixLoad}
  //定置装车
  {$DEFINE SanLed}
  //散装网口小屏(新驱动)
  {$DEFINE WXCreateOrderCtrl}
  //限量控制
  {$DEFINE UseWXServiceEx}
  //使用微信二期
{$ENDIF}

