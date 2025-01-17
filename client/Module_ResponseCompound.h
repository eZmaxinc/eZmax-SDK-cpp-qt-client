/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Module_ResponseCompound.h
 *
 * A Module Object
 */

#ifndef Module_ResponseCompound_H
#define Module_ResponseCompound_H

#include <QJsonObject>

#include "Module_Response.h"
#include "Modulesection_ResponseCompound.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Modulesection_ResponseCompound;

class Module_ResponseCompound : public Object {
public:
    Module_ResponseCompound();
    Module_ResponseCompound(QString json);
    ~Module_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiModuleId() const;
    void setPkiModuleId(const qint32 &pki_module_id);
    bool is_pki_module_id_Set() const;
    bool is_pki_module_id_Valid() const;

    qint32 getFkiModulegroupId() const;
    void setFkiModulegroupId(const qint32 &fki_modulegroup_id);
    bool is_fki_modulegroup_id_Set() const;
    bool is_fki_modulegroup_id_Valid() const;

    QString getEModuleInternalname() const;
    void setEModuleInternalname(const QString &e_module_internalname);
    bool is_e_module_internalname_Set() const;
    bool is_e_module_internalname_Valid() const;

    QString getSModuleNameX() const;
    void setSModuleNameX(const QString &s_module_name_x);
    bool is_s_module_name_x_Set() const;
    bool is_s_module_name_x_Valid() const;

    bool isBModuleRegistered() const;
    void setBModuleRegistered(const bool &b_module_registered);
    bool is_b_module_registered_Set() const;
    bool is_b_module_registered_Valid() const;

    bool isBModuleRegisteredapi() const;
    void setBModuleRegisteredapi(const bool &b_module_registeredapi);
    bool is_b_module_registeredapi_Set() const;
    bool is_b_module_registeredapi_Valid() const;

    QList<Modulesection_ResponseCompound> getAObjModulesection() const;
    void setAObjModulesection(const QList<Modulesection_ResponseCompound> &a_obj_modulesection);
    bool is_a_obj_modulesection_Set() const;
    bool is_a_obj_modulesection_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_module_id;
    bool m_pki_module_id_isSet;
    bool m_pki_module_id_isValid;

    qint32 m_fki_modulegroup_id;
    bool m_fki_modulegroup_id_isSet;
    bool m_fki_modulegroup_id_isValid;

    QString m_e_module_internalname;
    bool m_e_module_internalname_isSet;
    bool m_e_module_internalname_isValid;

    QString m_s_module_name_x;
    bool m_s_module_name_x_isSet;
    bool m_s_module_name_x_isValid;

    bool m_b_module_registered;
    bool m_b_module_registered_isSet;
    bool m_b_module_registered_isValid;

    bool m_b_module_registeredapi;
    bool m_b_module_registeredapi_isSet;
    bool m_b_module_registeredapi_isValid;

    QList<Modulesection_ResponseCompound> m_a_obj_modulesection;
    bool m_a_obj_modulesection_isSet;
    bool m_a_obj_modulesection_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Module_ResponseCompound)

#endif // Module_ResponseCompound_H
