/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_importEzsigntemplatepackage_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage
 */

#ifndef Ezsignfolder_importEzsigntemplatepackage_v1_Request_H
#define Ezsignfolder_importEzsigntemplatepackage_v1_Request_H

#include <QJsonObject>

#include "Custom_ImportEzsigntemplatepackageRelation_Request.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_ImportEzsigntemplatepackageRelation_Request;

class Ezsignfolder_importEzsigntemplatepackage_v1_Request : public Object {
public:
    Ezsignfolder_importEzsigntemplatepackage_v1_Request();
    Ezsignfolder_importEzsigntemplatepackage_v1_Request(QString json);
    ~Ezsignfolder_importEzsigntemplatepackage_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    QList<Custom_ImportEzsigntemplatepackageRelation_Request> getAObjImportEzsigntemplatepackageRelation() const;
    void setAObjImportEzsigntemplatepackageRelation(const QList<Custom_ImportEzsigntemplatepackageRelation_Request> &a_obj_import_ezsigntemplatepackage_relation);
    bool is_a_obj_import_ezsigntemplatepackage_relation_Set() const;
    bool is_a_obj_import_ezsigntemplatepackage_relation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    QString m_dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    QList<Custom_ImportEzsigntemplatepackageRelation_Request> m_a_obj_import_ezsigntemplatepackage_relation;
    bool m_a_obj_import_ezsigntemplatepackage_relation_isSet;
    bool m_a_obj_import_ezsigntemplatepackage_relation_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_importEzsigntemplatepackage_v1_Request)

#endif // Ezsignfolder_importEzsigntemplatepackage_v1_Request_H
