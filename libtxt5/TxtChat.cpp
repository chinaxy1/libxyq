#include "TxtChat.h"

using namespace ctt;
static const std::vector<sChat> s_chats = 
{
	{ 0x4D3D1188, eChat::_0, "微笑" },
	{ 0x6E7A8E8F, eChat::_1, "开口笑" },
	{ 0x403105F2, eChat::_2, "顽皮的笑" },
	{ 0xD3C23894, eChat::_3, "晕倒～" },
	{ 0xEDD63AB1, eChat::_4, "我生气了" },
	{ 0xC8AA7848, eChat::_5, "蝙蝠侠，呵呵" },
	{ 0xA5D718B1, eChat::_6, "我们是哥们，干杯！" },
	{ 0xE0C6F0D3, eChat::_7, "小心我咬你" },
	{ 0x572F2A4D, eChat::_8, "心碎了" },
	{ 0xA1E13E27, eChat::_9, "让你看我的真心" },
	{ 0xB2F4A198, eChat::_10, "生日快乐" },
	{ 0xEDEBCFCF, eChat::_11, "交个朋友吧" },
	{ 0x3B3D19C0, eChat::_12, "到点了" },
	{ 0x9EEC6DE4, eChat::_13, "休息一下" },
	{ 0x1B1B8326, eChat::_14, "发愁啊～～" },
	{ 0x525FCCF9, eChat::_15, "555你欺侮我" },
	{ 0xAD9E8BAD, eChat::_16, "我是小恶魔" },
	{ 0xE9A1E271, eChat::_17, "人家脸红了" },
	{ 0x1C7C95C4, eChat::_18, "打劫！我有枪的" },
	{ 0x1500E768, eChat::_19, "我是MM" },
	{ 0x30615DBC, eChat::_20, "我是GG" },
	{ 0x3694C64F, eChat::_21, "送你一个吻" },
	{ 0xFD438646, eChat::_22, "有空call" },
	{ 0x4FAD347C, eChat::_23, "送你红玫瑰" },
	{ 0x743AF90F, eChat::_24, "不会吧" },
	{ 0x853F3BC9, eChat::_25, "鬼脸" },
	{ 0xD6436048, eChat::_26, "你真了不起（表示肯定）" },
	{ 0x74E0F5FA, eChat::_27, "菜鸟（表示否定）" },
	{ 0x8E0063E2, eChat::_28, "扮酷" },
	{ 0x5BA9CF5E, eChat::_29, "猪头～" },
	{ 0xE8E08FA9, eChat::_30, "嘿！我想到了" },
	{ 0x888536BF, eChat::_31, "请你喝可乐" },
	{ 0xBEDE7D41, eChat::_32, "快来啊" },
	{ 0xF06B6B9E, eChat::_33, "送你小礼物" },
	{ 0x58FAA400, eChat::_34, "我困了" },
	{ 0x270D5C71, eChat::_35, "不是吧？" },
	{ 0xACE9C474, eChat::_36, "人家暗恋你好久啦……" },
	{ 0xBE3150EE, eChat::_37, "送你一朵小红花！" },
	{ 0x11C5EA40, eChat::_38, "见到你好高兴！" },
	{ 0x73F3BF9D, eChat::_39, "好热呀，扇扇风！" },
	{ 0xCCD6B7E8, eChat::_40, "休息一下，擦擦汗。" },
	{ 0x66D0E07C, eChat::_41, "好高兴好高兴！" },
	{ 0x9A8BFB91, eChat::_42, "我会唱歌，吹笛子。" },
	{ 0xCA47B474, eChat::_43, "真激动呀！" },
	{ 0x590CAA9B, eChat::_44, "得意忘形的笑，得意的笑……" },
	{ 0x4E20C2E6, eChat::_45, "好惊讶！怎么会这样呢？" },
	{ 0x44B657A9, eChat::_46, "快一点，等不及啦！" },
	{ 0x978F8F8A, eChat::_47, "哇哈哈～" },
	{ 0x522BC68F, eChat::_48, "我很鬼，是小妖怪。" },
	{ 0xA8A9B15D, eChat::_49, "恩，很舒服。" },
	{ 0xE53DE56A, eChat::_50, "鼓掌。" },
	{ 0xE88B5354, eChat::_51, "大声叫好！" },
	{ 0x0417C932, eChat::_52, "痛哭，好伤心啊！" },
	{ 0xC699AB3E, eChat::_53, "翻筋斗" },
	{ 0x19CA9706, eChat::_54, "我生气啦！" },
	{ 0xFCD58523, eChat::_55, "快点告诉我。" },
	{ 0xCD8F0AD6, eChat::_56, "暗自开心，洋洋得意。" },
	{ 0x978B9123, eChat::_57, "打电话给我。" },
	{ 0x0E658C4C, eChat::_58, "ZZZZZZZZZZ……" },
	{ 0x12BE1C3E, eChat::_59, "XX山泉有点甜。" },
	{ 0x85AC8CCB, eChat::_60, "我生气了……哈哈，傻瓜，骗你的。" },
	{ 0x707ABF50, eChat::_61, "真的吗？太高兴啦！" },
	{ 0x58C9FAB0, eChat::_62, "看我表演！" },
	{ 0xAA7B3B42, eChat::_63, "哇，真的被你吓到了！" },
	{ 0xF2FBDA6E, eChat::_64, "兴高采烈，非常开心" },
	{ 0xFC4215EC, eChat::_65, "呕吐啊" },
	{ 0xD086F684, eChat::_66, "给你一锤子" },
	{ 0xFCCAA9B5, eChat::_67, "给我闭嘴" },
	{ 0xE5FF2DE2, eChat::_68, "睡觉觉" },
	{ 0x87621B9F, eChat::_69, "无可奈何" },
	{ 0xCDC95381, eChat::_70, "我是小护士" },
	{ 0x396C4E03, eChat::_71, "鄙视你" },
	{ 0xB06B70C0, eChat::_72, "吃饭咯" },
	{ 0xADE1576E, eChat::_73, "我回来了" },
	{ 0xFB472367, eChat::_74, "流汗" },
	{ 0xEDA67286, eChat::_75, "好厉害哦" },
	{ 0x15CA26D9, eChat::_76, "看我怎么收拾你" },
	{ 0xDC9C1E87, eChat::_77, "开大餐咯" },
	{ 0xB5786848, eChat::_78, "不要啊" },
	{ 0xC2A7A47D, eChat::_79, "升级咯" },
	{ 0x7EEB3422, eChat::_80, "流口水" },
	{ 0x8F20BE2E, eChat::_81, "超人来啦" },
	{ 0xA1E7B566, eChat::_82, "不理你了" },
	{ 0x11729962, eChat::_83, "Yeah!" },
	{ 0xEF498C25, eChat::_84, "加油啊加油" },
	{ 0xF95512DC, eChat::_85, "有信来了" },
	{ 0xF5509B1C, eChat::_86, "抽根烟休息一下" },
	{ 0x7F869E1E, eChat::_87, "来亲一个" },
	{ 0x107CF5F3, eChat::_88, "一见钟情" },
	{ 0xF45DCF6A, eChat::_89, "我们好恩爱" },
	{ 0x99AFED62, eChat::_90, "流鼻血" },
	{ 0xC8BBEEA3, eChat::_91, "强" },
	{ 0x225ECF82, eChat::_92, "干杯！" },
	{ 0xD5C14B62, eChat::_93, "送花给你！" },
	{ 0xA8BC861D, eChat::_94, "给你写信" },
	{ 0x7229A70C, eChat::_95, "是他干的" },
	{ 0x4FF6E07A, eChat::_96, "快来人啊" },
	{ 0xDF1F56AC, eChat::_97, "火烧pp啦" },
	{ 0x488EBBD6, eChat::_98, "拜拜" },
	{ 0x4806AE3B, eChat::_99, "无聊" },
	{ 0x09574327, eChat::_100, "浪漫" },
	{ 0x7A9F28C7, eChat::_101, "闪啦" },
	{ 0xB7E060C1, eChat::_102, "兴高采烈" },
	{ 0x5887677B, eChat::_103, "见鬼啦" },
	{ 0x1C0BCE22, eChat::_104, "俯卧撑" },
	{ 0xAAFBD630, eChat::_105, "举杠铃" },
	{ 0xE4994B6A, eChat::_106, "仰卧起坐" },
	{ 0xACA32B8F, eChat::_107, "摸摸" },
	{ 0xED5B5996, eChat::_108, "悲剧" },
	{ 0x65D48DBF, eChat::_109, "拍马屁" },
	{ 0x91EAD158, eChat::_110, "寒" },
	{ 0x50BF3749, eChat::_111, "囧" },
	{ 0x383F3815, eChat::_112, "演讲" },
	{ 0x445A8BA0, eChat::_113, "变猪猪" },
	{ 0xD6252D94, eChat::_114, "乐极生悲" },
	{ 0x247121AF, eChat::_115, "晕" },
	{ 0x64A8BD13, eChat::_116, "浮云" },
	{ 0x79C2D9F2, eChat::_117, "神马" },
	{ 0xD753949E, eChat::_118, "拍死" },
	{ 0x57648A83, eChat::_119, "一起卖萌" },
//	{ 0x2DF12D10, eChat::_118, "可爱玲珑兔" }
	{ 0x00000000, eChat::_129, "感动玲珑兔" },
	{ 0x00000000, eChat::_130, "???" },
	{ 0x00000000, eChat::_131, "虎虎生威" },
	{ 0x00000000, eChat::_132, "不屑" },
	{ 0x00000000, eChat::_133, "中箭" },
	{ 0x00000000, eChat::_134, "亲近" },
	{ 0x00000000, eChat::_135, "再见" },
	{ 0x00000000, eChat::_136, "叹气" },
	{ 0x00000000, eChat::_137, "吐舌头" },
	{ 0x00000000, eChat::_138, "吓一跳" },
	{ 0x00000000, eChat::_139, "爱老虎油" },
	{ 0x00000000, eChat::_140, "无聊" },
	{ 0x00000000, eChat::_141, "捏捏脸" },
	{ 0x00000000, eChat::_142, "压力" },
	{ 0x00000000, eChat::_143, "掀桌" },
	{ 0x00000000, eChat::_144, "撞墙" },
	{ 0x00000000, eChat::_145, "给力" },
	{ 0x00000000, eChat::_146, "吐烟圈" },
	{ 0x00000000, eChat::_147, "麻匪" },
	{ 0x00000000, eChat::_148, "捏脸" },
	{ 0x00000000, eChat::_149, "抱抱" },
	{ 0x00000000, eChat::_150, "你在干嘛？" },
	{ 0x00000000, eChat::_151, "不信" },
	{ 0x00000000, eChat::_152, "吃货" },
	{ 0x00000000, eChat::_153, "开饭啦" },
	{ 0x00000000, eChat::_154, "飞吻" },
	{ 0x00000000, eChat::_155, "放空" },
	{ 0x00000000, eChat::_156, "骂" },
	{ 0x00000000, eChat::_157, "卖萌" },
	{ 0x00000000, eChat::_158, "喷血" },
	{ 0x00000000, eChat::_159, "装傻" },
	{ 0x00000000, eChat::_160, "哼" },
	{ 0x00000000, eChat::_161, "推到" },
	{ 0x00000000, eChat::_162, "挖鼻孔" },
	{ 0x00000000, eChat::_163, "挥手绢" },
	{ 0x00000000, eChat::_164, "我信了" },
	{ 0x00000000, eChat::_165, "吃萝卜" },
	{ 0x00000000, eChat::_166, "吃惊" },
	{ 0x00000000, eChat::_167, "1秒变格格" },
	{ 0x00000000, eChat::_168, "耳光" },
	{ 0x00000000, eChat::_169, "威武！" },
	{ 0x00000000, eChat::_170, "加油" },
	{ 0x00000000, eChat::_171, "揉揉脸" },
	{ 0x00000000, eChat::_172, "得意" },
	{ 0x00000000, eChat::_173, "喝喝" },
	{ 0x00000000, eChat::_174, "很生气" },
	{ 0x00000000, eChat::_175, "大叔" },
	{ 0x00000000, eChat::_176, "不知道" },
	{ 0x00000000, eChat::_177, "揍你嗷" },
	{ 0x00000000, eChat::_178, "菊花" },
	{ 0x00000000, eChat::_179, "捶地哭" },
	{ 0x00000000, eChat::_180, "飘过" },
	{ 0x00000000, eChat::_181, "恭喜发财" },
};

const vector<sChat>& ctt::getChats()
{
	return s_chats;
}
