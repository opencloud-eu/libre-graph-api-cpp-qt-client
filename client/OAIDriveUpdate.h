// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.8
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIDriveUpdate.h
 *
 * The drive represents an update to a space on the storage.
 */

#ifndef OAIDriveUpdate_H
#define OAIDriveUpdate_H

#include <QJsonObject>

#include "OAIDriveItem.h"
#include "OAIIdentitySet.h"
#include "OAIItemReference.h"
#include "OAIQuota.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIIdentitySet;
class OAIItemReference;
class OAIQuota;
class OAIDriveItem;


class OAIDriveUpdatePrivate;

class OAIDriveUpdate : public OAIObject {
public:
    OAIDriveUpdate();
    OAIDriveUpdate(const OAIDriveUpdate &other);
    OAIDriveUpdate(QString json);
    ~OAIDriveUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIIdentitySet getCreatedBy() const;
    void setCreatedBy(const OAIIdentitySet &created_by);
    bool is_created_by_Set() const;
    bool is_created_by_Valid() const;

    QDateTime getCreatedDateTime() const;
    void setCreatedDateTime(const QDateTime &created_date_time);
    bool is_created_date_time_Set() const;
    bool is_created_date_time_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getETag() const;
    void setETag(const QString &e_tag);
    bool is_e_tag_Set() const;
    bool is_e_tag_Valid() const;

    OAIIdentitySet getLastModifiedBy() const;
    void setLastModifiedBy(const OAIIdentitySet &last_modified_by);
    bool is_last_modified_by_Set() const;
    bool is_last_modified_by_Valid() const;

    QDateTime getLastModifiedDateTime() const;
    void setLastModifiedDateTime(const QDateTime &last_modified_date_time);
    bool is_last_modified_date_time_Set() const;
    bool is_last_modified_date_time_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIItemReference getParentReference() const;
    void setParentReference(const OAIItemReference &parent_reference);
    bool is_parent_reference_Set() const;
    bool is_parent_reference_Valid() const;

    QString getWebUrl() const;
    void setWebUrl(const QString &web_url);
    bool is_web_url_Set() const;
    bool is_web_url_Valid() const;

    QString getDriveType() const;
    void setDriveType(const QString &drive_type);
    bool is_drive_type_Set() const;
    bool is_drive_type_Valid() const;

    QString getDriveAlias() const;
    void setDriveAlias(const QString &drive_alias);
    bool is_drive_alias_Set() const;
    bool is_drive_alias_Valid() const;

    OAIIdentitySet getOwner() const;
    void setOwner(const OAIIdentitySet &owner);
    bool is_owner_Set() const;
    bool is_owner_Valid() const;

    OAIQuota getQuota() const;
    void setQuota(const OAIQuota &quota);
    bool is_quota_Set() const;
    bool is_quota_Valid() const;

    QList<OAIDriveItem> getItems() const;
    void setItems(const QList<OAIDriveItem> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    OAIDriveItem getRoot() const;
    void setRoot(const OAIDriveItem &root);
    bool is_root_Set() const;
    bool is_root_Valid() const;

    QList<OAIDriveItem> getSpecial() const;
    void setSpecial(const QList<OAIDriveItem> &special);
    bool is_special_Set() const;
    bool is_special_Valid() const;

    bool isLibreGraphHasTrashedItems() const;
    void setLibreGraphHasTrashedItems(const bool &libre_graph_has_trashed_items);
    bool is_libre_graph_has_trashed_items_Set() const;
    bool is_libre_graph_has_trashed_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIDriveUpdate)
    QSharedPointer<OAIDriveUpdatePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDriveUpdate)

#endif // OAIDriveUpdate_H
