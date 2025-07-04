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
 * OAIEducationClass.h
 *
 * And extension of group representing a class or course
 */

#ifndef OAIEducationClass_H
#define OAIEducationClass_H

#include <QJsonObject>

#include "OAIUser.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser;


class OAIEducationClassPrivate;

class OAIEducationClass : public OAIObject {
public:
    OAIEducationClass();
    OAIEducationClass(const OAIEducationClass &other);
    OAIEducationClass(QString json);
    ~OAIEducationClass() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QList<OAIUser> getMembers() const;
    void setMembers(const QList<OAIUser> &members);
    bool is_members_Set() const;
    bool is_members_Valid() const;

    QSet<QString> getMembersodataBind() const;
    void setMembersodataBind(const QSet<QString> &membersodata_bind);
    bool is_membersodata_bind_Set() const;
    bool is_membersodata_bind_Valid() const;

    QString getClassification() const;
    void setClassification(const QString &classification);
    bool is_classification_Set() const;
    bool is_classification_Valid() const;

    QString getExternalId() const;
    void setExternalId(const QString &external_id);
    bool is_external_id_Set() const;
    bool is_external_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIEducationClass)
    QSharedPointer<OAIEducationClassPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEducationClass)

#endif // OAIEducationClass_H
