CREATE TABLE [dbo].[Student] (
    [ST_ID]       INT       NOT NULL,
    [CopyId]      INT       NULL,
    [ST_Name]     TEXT      NOT NULL,
    [ST_passward] CHAR (50) NOT NULL,
    CONSTRAINT [PK_STUDENT] PRIMARY KEY CLUSTERED ([ST_ID] ASC)
);

