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
 * OAIClass_Member_Reference.h
 *
 * 
 */

#ifndef OAIClass_Member_Reference_H
#define OAIClass_Member_Reference_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIClass_Member_ReferencePrivate;

class OAIClass_Member_Reference : public OAIObject {
public:
    OAIClass_Member_Reference();
    OAIClass_Member_Reference(const OAIClass_Member_Reference &other);
    OAIClass_Member_Reference(QString json);
    ~OAIClass_Member_Reference() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOdataId() const;
    void setOdataId(const QString &odata_id);
    bool is_odata_id_Set() const;
    bool is_odata_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIClass_Member_Reference)
    QSharedPointer<OAIClass_Member_ReferencePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIClass_Member_Reference)

#endif // OAIClass_Member_Reference_H
