/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackagemembership_ResponseCompound.h
 *
 * A Ezsigntemplatepackagemembership Object
 */

#ifndef OAIEzsigntemplatepackagemembership_ResponseCompound_H
#define OAIEzsigntemplatepackagemembership_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsigntemplate_ResponseCompound.h"
#include "OAIEzsigntemplatepackagemembership_Response.h"
#include "OAIEzsigntemplatepackagemembership_ResponseCompound_allOf.h"
#include "OAIEzsigntemplatepackagesignermembership_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_ResponseCompound;
class OAIEzsigntemplatepackagesignermembership_ResponseCompound;

class OAIEzsigntemplatepackagemembership_ResponseCompound : public OAIObject {
public:
    OAIEzsigntemplatepackagemembership_ResponseCompound();
    OAIEzsigntemplatepackagemembership_ResponseCompound(QString json);
    ~OAIEzsigntemplatepackagemembership_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackagemembershipId() const;
    void setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id);
    bool is_pki_ezsigntemplatepackagemembership_id_Set() const;
    bool is_pki_ezsigntemplatepackagemembership_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    qint32 getIEzsigntemplatepackagemembershipOrder() const;
    void setIEzsigntemplatepackagemembershipOrder(const qint32 &i_ezsigntemplatepackagemembership_order);
    bool is_i_ezsigntemplatepackagemembership_order_Set() const;
    bool is_i_ezsigntemplatepackagemembership_order_Valid() const;

    OAIEzsigntemplate_ResponseCompound getObjEzsigntemplate() const;
    void setObjEzsigntemplate(const OAIEzsigntemplate_ResponseCompound &obj_ezsigntemplate);
    bool is_obj_ezsigntemplate_Set() const;
    bool is_obj_ezsigntemplate_Valid() const;

    QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> getAObjEzsigntemplatepackagesignermembership() const;
    void setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> &a_obj_ezsigntemplatepackagesignermembership);
    bool is_a_obj_ezsigntemplatepackagesignermembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagesignermembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatepackagemembership_id;
    bool m_pki_ezsigntemplatepackagemembership_id_isSet;
    bool m_pki_ezsigntemplatepackagemembership_id_isValid;

    qint32 fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    qint32 fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    qint32 i_ezsigntemplatepackagemembership_order;
    bool m_i_ezsigntemplatepackagemembership_order_isSet;
    bool m_i_ezsigntemplatepackagemembership_order_isValid;

    OAIEzsigntemplate_ResponseCompound obj_ezsigntemplate;
    bool m_obj_ezsigntemplate_isSet;
    bool m_obj_ezsigntemplate_isValid;

    QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> a_obj_ezsigntemplatepackagesignermembership;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isSet;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagemembership_ResponseCompound)

#endif // OAIEzsigntemplatepackagemembership_ResponseCompound_H
