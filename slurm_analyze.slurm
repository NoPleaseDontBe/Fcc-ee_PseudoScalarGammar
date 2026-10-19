#!/bin/bash
# ============================================================
#  SLURM: place the generated samples in samples/, then run the Z->mu e analysis.
#  makecard ("combine") is skipped -> no cross sections needed.
#  Submit from the analysis repo root:   sbatch slurm_analyze.slurm
# ============================================================
#SBATCH --qos=cu_hpc
#SBATCH --partition=cpugpu
#SBATCH --job-name=ZToMuE_analyze
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=8
#SBATCH --mem=32G
#SBATCH --output=logs/slurm_analyze_%j.log

set -e
echo "host: $(hostname)   start: $(date)"

# ---- CMS / HEP software environment (REQUIRED for ROOT + Delphes classes) ----
source /work/app/cms/cmsset_default.sh
function cmsset() {
  cd ~/binary/CMSSW_14_1_0_pre5/src && source /work/app/share_env/hepsw.sh && cmsenv && cd -
}
cmsset
mkdir -p ANALYSIS/hist/
echo "--- input samples ---"
ls -R samples || true

echo "--- run analysis (makecard/combine skipped) ---"
python3 runall.py -o ANALYSIS --parallel 4 --skip-makecard --skip-sbatch

echo "done -> ANALYSIS/hist/*.root   $(date)"