CREATE TABLE [dbo].[Book] (
    [BID]           INT       NOT NULL,
    [AD_ID]         INT       NULL,
    [BName]         INT       NOT NULL,
    
    [PublisherYear] INT       NOT NULL,
    [AuthorID]      INT       NOT NULL,
    CONSTRAINT [PK_BOOK] PRIMARY KEY CLUSTERED ([BID] ASC)
);

