/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_Error_sTemporaryFileUrl_allOf.h
 *
 * 
 */

#ifndef OAICommon_Response_Error_sTemporaryFileUrl_allOf_H
#define OAICommon_Response_Error_sTemporaryFileUrl_allOf_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_Error_sTemporaryFileUrl_allOf : public OAIObject {
public:
    OAICommon_Response_Error_sTemporaryFileUrl_allOf();
    OAICommon_Response_Error_sTemporaryFileUrl_allOf(QString json);
    ~OAICommon_Response_Error_sTemporaryFileUrl_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSTemporaryFileUrl() const;
    void setSTemporaryFileUrl(const QString &s_temporary_file_url);
    bool is_s_temporary_file_url_Set() const;
    bool is_s_temporary_file_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_temporary_file_url;
    bool m_s_temporary_file_url_isSet;
    bool m_s_temporary_file_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_Error_sTemporaryFileUrl_allOf)

#endif // OAICommon_Response_Error_sTemporaryFileUrl_allOf_H
