/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <Notes/NotesAssistantViewCell.h>

@class UILabel;

@interface NotesAssistantNotesListViewCell : SiriUIContentCollectionViewCell <NotesAssistantViewCell> {

	UILabel* _title;
	UILabel* _date;

}
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setNote:(id)arg1 ;
@end

