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
 * OAIModulegroup_ResponseCompound.h
 *
 * A Modulegroup Object
 */

#ifndef OAIModulegroup_ResponseCompound_H
#define OAIModulegroup_ResponseCompound_H

#include <QJsonObject>

#include "OAIModule_ResponseCompound.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIModule_ResponseCompound;

class OAIModulegroup_ResponseCompound : public OAIObject {
public:
    OAIModulegroup_ResponseCompound();
    OAIModulegroup_ResponseCompound(QString json);
    ~OAIModulegroup_ResponseCompound() override;

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

    QList<OAIModule_ResponseCompound> getAObjModule() const;
    void setAObjModule(const QList<OAIModule_ResponseCompound> &a_obj_module);
    bool is_a_obj_module_Set() const;
    bool is_a_obj_module_Valid() const;

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

    QList<OAIModule_ResponseCompound> a_obj_module;
    bool m_a_obj_module_isSet;
    bool m_a_obj_module_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIModulegroup_ResponseCompound)

#endif // OAIModulegroup_ResponseCompound_H