/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIModulegroup_Response.h
 *
 * A Modulegroup Object
 */

#ifndef OAIModulegroup_Response_H
#define OAIModulegroup_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIModulegroup_Response : public OAIObject {
public:
    OAIModulegroup_Response();
    OAIModulegroup_Response(QString json);
    ~OAIModulegroup_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiModulegroupId() const;
    void setPkiModulegroupId(const qint32 &pki_modulegroup_id);
    bool is_pki_modulegroup_id_Set() const;
    bool is_pki_modulegroup_id_Valid() const;

    QString getSModulegroupNameX() const;
    void setSModulegroupNameX(const QString &s_modulegroup_name_x);
    bool is_s_modulegroup_name_x_Set() const;
    bool is_s_modulegroup_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_modulegroup_id;
    bool m_pki_modulegroup_id_isSet;
    bool m_pki_modulegroup_id_isValid;

    QString s_modulegroup_name_x;
    bool m_s_modulegroup_name_x_isSet;
    bool m_s_modulegroup_name_x_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIModulegroup_Response)

#endif // OAIModulegroup_Response_H
