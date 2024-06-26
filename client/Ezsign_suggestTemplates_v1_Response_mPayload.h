/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsign_suggestTemplates_v1_Response_mPayload.h
 *
 * Payload for GET /1/module/ezsign/suggestTemplates
 */

#ifndef Ezsign_suggestTemplates_v1_Response_mPayload_H
#define Ezsign_suggestTemplates_v1_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplate_ResponseCompound.h"
#include "Ezsigntemplateglobal_ResponseCompound.h"
#include "Ezsigntemplatepackage_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplate_ResponseCompound;
class Ezsigntemplatepackage_ResponseCompound;
class Ezsigntemplateglobal_ResponseCompound;

class Ezsign_suggestTemplates_v1_Response_mPayload : public Object {
public:
    Ezsign_suggestTemplates_v1_Response_mPayload();
    Ezsign_suggestTemplates_v1_Response_mPayload(QString json);
    ~Ezsign_suggestTemplates_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplate_ResponseCompound> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<Ezsigntemplate_ResponseCompound> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    QList<Ezsigntemplatepackage_ResponseCompound> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<Ezsigntemplatepackage_ResponseCompound> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    QList<Ezsigntemplateglobal_ResponseCompound> getAObjEzsigntemplateglobal() const;
    void setAObjEzsigntemplateglobal(const QList<Ezsigntemplateglobal_ResponseCompound> &a_obj_ezsigntemplateglobal);
    bool is_a_obj_ezsigntemplateglobal_Set() const;
    bool is_a_obj_ezsigntemplateglobal_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplate_ResponseCompound> m_a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;

    QList<Ezsigntemplatepackage_ResponseCompound> m_a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;

    QList<Ezsigntemplateglobal_ResponseCompound> m_a_obj_ezsigntemplateglobal;
    bool m_a_obj_ezsigntemplateglobal_isSet;
    bool m_a_obj_ezsigntemplateglobal_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsign_suggestTemplates_v1_Response_mPayload)

#endif // Ezsign_suggestTemplates_v1_Response_mPayload_H
